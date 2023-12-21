# 0x1A. C - Hash tables

![image](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2020/9/5ebbea5dea5a575b38243d597604000715982925.gif?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20231221%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20231221T145346Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=9971b76b8dd77808a654049e16626ef4aa9b7e677aec1c5682d391ddd9c12da8)

## Resources

- [What is a HashTable Data Structure - Introduction to Hash Tables , Part 0](https://intranet.alxswe.com/rltoken/IQVfdxJlS6jhAgcuUoCseg)
- [Hash function](https://intranet.alxswe.com/rltoken/ZKpRI_FxOxAz80Onpfy0Ew)
- [Hash table](https://intranet.alxswe.com/rltoken/mxjKpEfAw3E5B8S3inPuHQ)
- [All about hash tables](https://intranet.alxswe.com/rltoken/3RwwAqmpGJpMiBa7BE9fAQ)
- [why hash tables and not arrays](https://intranet.alxswe.com/rltoken/OgO7uga3PIaCTMtTzYCY3g)

## General
- What is a hash function
- What makes a good hash function
- What is a hash table, how do they work and how to use them
- What is a collision and what are the main ways of dealing with collisions in the context of a hash table
- What are the advantages and drawbacks of using hash tables
- What are the most common use cases of hash tables

## Data Structures
- Please use these data structures for this project:
```
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

## Tests
- We strongly encourage you to work all together on a set of tests

## Python Dictionaries
- Python dictionaries are implemented using hash tables. When you will be done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type d = {'a': 1, 'b': 2}, but everything looks so simple for the user. Python doesn’t use the exact same implementation than the one you will work on today though. If you are curious on how it works under the hood, here is a good blog post about [how dictionaries are implemented in Python 2.7](https://intranet.alxswe.com/rltoken/hKhDFfKKcxdM9U8GZVPOHQ) (not mandatory).

- Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table. [Read more here](https://intranet.alxswe.com/rltoken/6wE80OFPwL-As1zGh2iMFg) (not mandatory).
