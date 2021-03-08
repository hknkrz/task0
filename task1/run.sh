#!/bin/bash
slash="/"
dir=$1
ext=$2
backup_dir=$3
archive=$4
mkdir $backup_dir
for f in $(find  $dir -type f -name "*.$ext")
do
if [ -f $f ]
then
var1=$(basename $f)
filename=$(basename $f)
len_filename=${#filename}
full_adress=${f::-$len_filename}
slash_to_backslash=${f//$slash/\\}
cp $f $backup_dir$slash_to_backslash
else
cp $f $backup_dir
fi
done

tar -czpf $archive $backup_dir
echo done
