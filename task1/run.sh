#!/bin/bash'
slash="/"
dir=$1
ext=$2
backup_dir=$3
archive=$4
arr=($(find  $dir -type f -name "*.$ext"))
for f in ${arr[@]}
do 
echo $f
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
cn=$full_adress$slash_to_backslash
mv $f $cn
fi
fi
done
done

for g in $(find  $dir -type f -name "*.$ext")
do
    cp $g $backup_dir
done
tar -czpf $archive $backup_dir
echo done

