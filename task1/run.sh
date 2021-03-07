#!/bin/bash
slash="/"
dir=$1
ext=$2
backup_dir=$3
archive=$4
mkdir $backup_dir
cp -r $dir $backup_dir
arr=($(find  $backup_dir -type f -name "*.$ext"))
for f in ${arr[@]}
do
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
for x in $(find $backup_dir -type f -not -name "*.$ext")
	do
		rm $x
	done
for z in $(find $backup_dir -type d -empty)
	do
		rmdir $z
	done
tar -czpf $archive $backup_dir
echo done

