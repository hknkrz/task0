#!/bin/bash
slash="/"
dir=$1
ext=$2
backup_dir=$3
archive=$4
mkdir $backup_dir
for f in $(find  $dir -type f -name "*.$ext")
do
cp $f $backup_dir
var1=$(basename $f)
for j in ${arr[@]}
do
var2=$(basename $j)
if [ "$var1" = "$var2" ];
then
if [ "$f" != "$j" ];
then

filename=$(basename $f)
len_filename=${#filename}
full_adress=${f::-$len_filename}
slash_to_backslash=${f//$slash/\\}
mv $backup_dir$filename $backup_dir$slash_to_backslash
fi
fi
done
done

tar -czpf $archive $backup_dir
echo done
