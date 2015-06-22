# !/bin/bash
#
# build.sh [version_major] [version_minor] [version_string]
#

if [ "$1" == "" ] 
then 
  echo "Wrong argument 1"
  exit 0
fi
if [ "$2" == "" ] 
then 
  echo "Wrong argument 2"
  exit
fi
if [ "$3" == "" ] 
then
  echo "Wrong argument 3" 
  exit 0
fi

echo build $1.$2.$3

echo char test_vsn_major=$1 ";" > test_vsn.c
echo char test_vsn_minor=$2 ";" >> test_vsn.c
echo char test_vsn_string[]='"'$3'"' ";" >> test_vsn.c

gcc -o test main.c test_vsn.c

exit 0
