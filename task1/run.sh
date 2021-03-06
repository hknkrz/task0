#!/bin/bash
dir=$1
ext=$2
backup_dir=$3
archive=$4
mkdir $backup_dir
arr=($(find $dir -type f -name "*.$ext"))
for x in ${arr[@]}
do
cp --backup=t $x $backup_dir
done
tar -czpf $archive $backup_dir
echo done
