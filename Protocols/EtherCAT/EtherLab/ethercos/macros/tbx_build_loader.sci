// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2008 - INRIA - Simon LIPP <simon.lipp@scilab.org>
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt

// Generate a loader.sce script for the toolbox
function tbx_build_loader(toolbox_name, toolbox_path)
	oldpath = pwd();
	
	if(exists('toolbox_path', 'local')) then
		chdir(toolbox_path);
	end
	
	mprintf(gettext('Generating loader.sce...\n'));
	loader = [
	  "// ====================================================================",
	  "// generated by builder.sce",
	  "// Copyright INRIA 2008",
	  "// ====================================================================",
	  "mode(-1);",
	  "//try",
	  " //getversion(''scilab'');",
	  "//catch",
	  "// warning(''Scilab 5.0 or more is required.'');",
	  "// return;",
	  "//end;",
	  "// ====================================================================",
	  "root_tlbx = get_absolute_file_path(''loader.sce'');",
	  "exec(root_tlbx+''etc\''+''"+toolbox_name+".start'');",
	  "// ====================================================================",
	  "clear root_tlbx;",
	  "// ===================================================================="
	];
	mputl(loader,'loader.sce');
	
	chdir(oldpath);
endfunction
