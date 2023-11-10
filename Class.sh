

#!/bin/bash
ClassName=$1

touch "$ClassName.hpp" "$ClassName.cpp" 
upperVar=$(echo "$ClassName" | tr '[:lower:]' '[:upper:]')

echo "#ifndef" "$upperVar" >> "$ClassName.hpp"
echo "#define"  $upperVar >> "$ClassName.hpp"
echo ''   >> "$ClassName.hpp"
echo "#include <iostream>"   >> "$ClassName.hpp"

echo "\nclass" "$ClassName" "{"   >> "$ClassName.hpp"

echo  "\npublic:\n\t$ClassName();"   >> "$ClassName.hpp"
echo  "\t$ClassName(const $ClassName &obj);"   >> "$ClassName.hpp"
echo  "\t$ClassName& operator=(const $ClassName &obj);"   >> "$ClassName.hpp"
echo  "\t~$ClassName();\n};"   >> "$ClassName.hpp"

echo  "#endif"   >> "$ClassName.hpp"

echo "#include \"$ClassName.hpp"\""\n"   >> "$ClassName.cpp"
echo "$ClassName.cpp" >> Makefile
echo "#include \"$ClassName.hpp"\""\n"   >> "main.cpp"
echo  "$ClassName::$ClassName(){\n};"   >> "$ClassName.cpp"
echo  "\n$ClassName::~$ClassName(){\n};"   >> "$ClassName.cpp"
echo  "\n$ClassName& $ClassName::operator=(const $ClassName &obj){\n};"   >> "$ClassName.cpp"
echo  "\n$ClassName::$ClassName(const $ClassName &obj){\n};"   >> "$ClassName.cpp"
