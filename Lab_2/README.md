
# Introduction to Shell Script

### Variables & I/O

```bash
num=5
str='Hi'
echo "$str $num to you"

echo "Name ?"
read name
echo "Hola $name !"
```

### Argument

```bash
echo "Shell script $0"
echo "Argument 1 $1"
```

### Condition

- String Comparison

```bash
echo "Enter a word"
read ans

if [ $ans = "Big" ]
then
    echo "Ans is as big as big"
elif [ $ans != "Big" ]
then
    echo "Ans is not as big as big"
fi
```

- Number Comparison

```bash
echo "Enter 2 numbers"
read a
read b

if [ $a -eq $b ]
then
    echo "A B soman"
elif [ $a -gt $b ]
then
    echo "A boro"
elif [ $a -lt $b ]
then
    echo "A choto"
fi

# For some shell [[]]

if [[ $a == $b ]]
then
    echo "A B soman"
elif [[ $a > $b ]]
then
    echo "A boro"
else
    echo "A choto"
fi
```

### Loops

- For Loop

```bash
#v1
for i in 1 2 3 4 5
do
    mkdir "folder$i"
done

#v2
for i in {1..5}
do
    touch "file$i.txt"
done

#v3
for (( i=1; i<=10; i = i+2 ))
do
    echo "$i"
done
```

- While Loop

```bash
echo "Enter a number"
read n
i=1
while (( i <= 10 ))
do
    echo "$n x $i = $((n*i))"
    i=$((i+1))
done
```

### Problems

<details>
   <summary>Delete all files and folders of current directory using rm and rmdir but don't delete the running shell script</summary>

```bash
for i in $(ls)
do
    if [ $i == $(basename $0) ]
    then
        continue
    elif [ -f $i ]
    then
        rm $i
    elif [ -d $i ]
    then
        rmdir $i
    fi
done
```

</details>

```bash
for i in $(ls)
do
    if [[ $i != *.sh ]]
    then
        rm -r $i
    fi
done
```

</details>

<details>
   <summary>Delete all files and folders of current directory without a specific file type (E.g. shell scripts) </summary>

