mkdir dist
mkdir dist\i386_checked
mkdir dist\i386_free
mkdir dist\amd64_checked
mkdir dist\amd64_free



call ddkbuild.cmd -WIN7A64 Checked . -c -g -Z
call ddkbuild.cmd -WIN7A64 Free . -c -g -Z

call ddkbuild.cmd -WIN7 Checked . -c -g -Z
call ddkbuild.cmd -WIN7 Free . -c -g -Z


copy .\objchk_win7_x86\i386\ci_test.sys .\dist\i386_checked\ci_test.sys
copy .\objchk_win7_x86\i386\ci_test.pdb .\dist\i386_checked\ci_test.pdb

copy .\objfre_win7_x86\i386\ci_test.sys .\dist\i386_free\ci_test.sys
copy .\objfre_win7_x86\i386\ci_test.pdb .\dist\i386_free\ci_test.pdb

copy .\objchk_win7_amd64\amd64\ci_test64.sys .\dist\amd64_checked\ci_test64.sys
copy .\objchk_win7_amd64\amd64\ci_test64.pdb .\dist\amd64_checked\ci_test64.pdb

copy .\objfre_win7_amd64\amd64\ci_test64.sys .\dist\amd64_free\ci_test64.sys
copy .\objfre_win7_amd64\amd64\ci_test64.pdb .\dist\amd64_free\ci_test64.pdb

echo "done."
