/* This file is generated automatically by convert.pl from htags/manual.in. */
const char *progname = "htags";
const char *usage_const = "Usage: htags [-aDfFghInosTvw][-d dbpath][-m name][-t title][dir]\n";
const char *help_const = "Options:\n\
-a, --alphabet\n\
       Make an alphabetical index suitable for a large project.\n\
--auto-completion[=limit]\n\
       Enable auto-completion facility for the input form.\n\
       If limit is specified, number of candidates is limited to the value.\n\
       Please note this function requires javascript language in your browser.\n\
-C, --directory dir\n\
       Change the directory before doing all the work including parameter analysis.\n\
--caution\n\
       Display a caution message on the top page.\n\
--cflow cflowfile\n\
       Add a call tree by cflow(1). cflowfile must be posix format.\n\
       If you use GNU cflow, invoke the command at the project root\n\
       directory with the --format=posix option.\n\
       This option is deprecated; please use --call-tree or\n\
       --callee-tree instead.\n\
--call-tree callfile\n\
       Add a call tree by cflow(1); callfile must be posix format.\n\
       If you use GNU cflow, invoke the command at the project root\n\
       directory with the --format=posix option.\n\
--callee-tree calleefile\n\
       Add a callee tree by cflow(1); calleefile must be posix format.\n\
       If you use GNU cflow, invoke the command at the project root\n\
       directory with the --format=posix and --reverse options.\n\
--colorize-warned-line\n\
       Use color to highlight warned lines.\n\
--cvsweb url\n\
       Add a link to cvsweb; url is used as the base of URL.\n\
       When directory CVS exists in the root directory of the project,\n\
       the content of CVS/Repository is used as the relative path from the base.\n\
--cvsweb-cvsroot cvsroot\n\
       Specify cvsroot in cvsweb URL.\n\
-D, --dynamic\n\
       Generate a tag list dynamically using CGI program.\n\
       Though this option decreases both the size and generation time of\n\
       hypertext, you need to start up HTTP server.\n\
-d, --dbpath dbpath\n\
       Specify the directory in which GTAGS exists.\n\
       The default is the current directory.\n\
--disable-grep\n\
       Disable grep in the search form (-f, --form).\n\
--disable-idutils\n\
       Disable idutils in the search form (-f, --form).\n\
-F, --frame\n\
       Use frames for the top page.\n\
-f, --form\n\
       Add a search form using CGI program.\n\
       You need to start a HTTP server for it.\n\
--fixed-guide\n\
       Put a fixed guide at the bottom of the screen of the browser.\n\
--full-path\n\
       Use full path name in the file index.\n\
       By default, use just the last component of a path.\n\
-g, --gtags\n\
       Execute gtags(1) before starting job.\n\
       The -v, -w and dbpath options are\n\
       passed to gtags.\n\
--gtagsconf file\n\
       Set environment variable GTAGSCONF to file.\n\
--gtagslabel label\n\
       Set environment variable GTAGSLABEL to label.\n\
-h, --func-header[=position]\n\
       Insert a function header for each function.\n\
       By default, htags doesn't generate them.\n\
       You can choose the position using position,\n\
       which allows one of before, right or after (default).\n\
--help\n\
       Print a usage message.\n\
--html-header file\n\
       Insert a header record derived from file\n\
       into the HTML header of each file.\n\
-I, --icon\n\
       Use icons instead of text for some links.\n\
--insert-footer file\n\
       Insert custom footer derived from file before </body> tag.\n\
--insert-header file\n\
       Insert custom header derived from file after <body> tag.\n\
--item-order spec\n\
       Specify the order of the items in the top page.\n\
       The spec is a string consisting of item signs in order.\n\
       Each sign means as follows:\n\
       c: caution; s: search form;\n\
       m: mains; d: definitions; f: files; t: call tree.\n\
       The default is csmdf.\n\
-m, --main-func name\n\
       Specify startup function name; the default is main.\n\
--map-file\n\
       Generate file MAP.\n\
-n, --line-number[=columns]\n\
       Print line numbers. By default, don't print line numbers.\n\
       The default value of columns is 4.\n\
--no-order-list\n\
       Numbers are not given in list form.\n\
-o, --other\n\
       Pick up not only source files but also other files for the file index.\n\
-s, --symbol\n\
       Make anchors not only for definitions and references\n\
       but also other symbols.\n\
--show-position\n\
       Print the position string per function definition. The string can be\n\
       interpreted by general editors in UNIX. The default is false.\n\
--statistics\n\
       Print statistics information.\n\
--suggest\n\
       Htags chooses popular options on behalf of beginners.\n\
       It is equivalent to\n\
       -aghInosTxv --show-position --fixed-guide\n\
       now.\n\
--suggest2\n\
       Htags chooses popular options on behalf of beginners.\n\
       This option enables frame, AJAX and CGI facility in addition\n\
       to the facilities by the --suggest option.\n\
       It is equivalent to\n\
       --suggest  -DfF --auto-completion --tree-view=filetree\n\
       now.\n\
-T, --table-flist[=rows]\n\
       Use <table> tag to display the file index.\n\
       You can optionally specify the number of rows; the default is 5.\n\
-t, --title title\n\
       Title of the hypertext.\n\
       The default is the last component of the path of the current directory.\n\
--tabs cols\n\
       Tab stops. The default is 8.\n\
--table-list\n\
       Use <table> tag to display the tag list.\n\
--tree-view[=type]\n\
       Use treeview for the file index.\n\
       Please note this function requires javascript language in your browser.\n\
       Possible values of type are as follows: treeview, filetree,\n\
       treeview-red, treeview-black, treeview-gray,\n\
       treeview-famfamfam. The default is treeview.\n\
-v, --verbose\n\
       Verbose mode.\n\
--version\n\
       Show version number.\n\
-w, --warning\n\
       Print warning messages.\n\
dir\n\
       The directory in which the result of this command is stored.\n\
       The default is the current directory.\n\
See also:\n\
       GNU GLOBAL web site: http://www.gnu.org/software/global/\n\
";
