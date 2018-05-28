/*****************************************************************************
 *
 * $Id$
 *
 * Copyright (C) 2009  Florian Pose <fp@igh-essen.com>
 *
 * This file is part of the QtPdWidgets library.
 *
 * The QtPdWidgets library is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the License,
 * or (at your option) any later version.
 *
 * The QtPdWidgets library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser
 * General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with the QtPdWidgets Library. If not, see
 * <http://www.gnu.org/licenses/>.
 *
 ****************************************************************************/

#ifndef PD_PUSHBUTTON_H
#define PD_PUSHBUTTON_H

#include <QPushButton>

#include "Export.h"
#include "ScalarSubscriber.h"

namespace Pd {

/****************************************************************************/

/** Push Button.
 *
 * \todo Event mode with value checking.
 */
class QDESIGNER_WIDGET_EXPORT PushButton:
    public QPushButton, public ScalarSubscriber
{
    Q_OBJECT
    Q_ENUMS(ButtonMode EventAction EventCondition)
    Q_PROPERTY(ButtonMode buttonMode
            READ getButtonMode WRITE setButtonMode RESET resetButtonMode)
    Q_PROPERTY(EventCondition eventCondition
            READ getEventCondition WRITE setEventCondition
            RESET resetEventCondition)
    Q_PROPERTY(EventAction eventAction
            READ getEventAction WRITE setEventAction RESET resetEventAction)
    Q_PROPERTY(int onValue
            READ getOnValue WRITE setOnValue RESET resetOnValue)
    Q_PROPERTY(int offValue
            READ getOffValue WRITE setOffValue RESET resetOffValue)

    public:
        PushButton(QWidget *parent = 0);
        virtual ~PushButton();

        void clearData(); // pure-virtual from ScalarSubscriber

        /** Push button behaviour.
         */
        enum ButtonMode {
            PressRelease, /**< The #onValue is written when the button is
                            pressed down, the #offValue is written when
                            releasing it, respectively. */
            Event /**< An event is generated, based on #EventCondition
                    and #EventAction settings. */
        };
        ButtonMode getButtonMode() const;
        void setButtonMode(ButtonMode);
        void resetButtonMode();

        /** Event condition, determines when an event is generated.
         */
        enum EventCondition {
            OnClicked, /**< Event generated by QPushButton's clicked() signal
                         (button is pressed and released, while the cursor is
                         inside the button area. */
            OnPressed, /**< Event generated by QPushButton's pressed() signal
                         (button just pressed down). */
            OnReleased /**< Event generated by QPushButton's released() signal
                         (button released, regardless of cursor being inside
                         the button area). Consider using #OnClicked. */
        };
        EventCondition getEventCondition() const;
        void setEventCondition(EventCondition);
        void resetEventCondition();

        /** Event action, determines what happens, when an event is generated.
         */
        enum EventAction {
            IncrementValue, /**< The value of the process variable is
                              incremented. */
            SetOnValue, /**< The #onValue is written to the process variable.
                         */
            ToggleValue, /**< The #offValue is written to the process if the
                           last value was the #onValue. Otherwise the #onValue
                           is written to the process. */
        };
        EventAction getEventAction() const;
        void setEventAction(EventAction);
        void resetEventAction();
        int getOnValue() const;
        void setOnValue(int);
        void resetOnValue();
        int getOffValue() const;
        void setOffValue(int);
        void resetOffValue();

    private slots:
        void on_clicked();
        void on_pressed();
        void on_released();

    private:
        int32_t value; /**< The current value of the process variable. */
        bool pressed; /**< \a true, when the button is pressed down. */
        ButtonMode buttonMode; /**< The button behaviour. */
        EventCondition eventCondition; /**< Event condition. */
        EventAction eventAction; /**< Action on an event. */
        int onValue; /**< The value to be written, when the button is
                       pressed. */
        int offValue; /**< The value to be written, when the button is
                        released. */

        void changeEvent(QEvent *);
        void triggerEvent();
        void notify(PdCom::Variable *); // pure-virtual from PdCom::Subscriber
};

/****************************************************************************/

/**
 * \return The #buttonMode.
 */
inline PushButton::ButtonMode PushButton::getButtonMode() const
{
    return buttonMode;
}

/****************************************************************************/

/**
 * \return The #eventCondition.
 */
inline PushButton::EventCondition
PushButton::getEventCondition() const
{
    return eventCondition;
}

/****************************************************************************/

/**
 * \return The #eventAction.
 */
inline PushButton::EventAction PushButton::getEventAction() const
{
    return eventAction;
}

/****************************************************************************/

/**
 * \return The #onValue.
 */
inline int PushButton::getOnValue() const
{
    return onValue;
}

/****************************************************************************/

/**
 * \return The #offValue.
 */
inline int PushButton::getOffValue() const
{
    return offValue;
}

/****************************************************************************/

} // namespace

#endif
