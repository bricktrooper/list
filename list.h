#ifndef LIST_H
#define LIST_H

/*
The list data type MUST support copy-by-value with '=' assignment.
All C data types except arrays should work.
*/

#define LIST_DATA_TYPE                 int   // can be redefined to a custom data type instead of 'int'
#define LIST_DATA_TYPE_INVALID_VALUE    -1   // invalid value for list functions that return 'Data' values

typedef struct List List;

List * list_new(void);
int list_delete(List * list);
int list_clear(List * list);
int list_append(List * list, LIST_DATA_TYPE data);
int list_insert(List * list, int index, LIST_DATA_TYPE data);
LIST_DATA_TYPE list_remove(List * list, int index);
LIST_DATA_TYPE list_get(List * list, int index);
int list_set(List * list, int index, LIST_DATA_TYPE data);
int list_length(List * list);
int list_print(List * list);   // requires list_set_print_data() to be configured first

/*
User defined function to print a single list data value.
The function should be of the form 'void function(Data data)'.
Ideally, the function should not print a newline after the data.
*/
int list_set_print_data(void (* function)(LIST_DATA_TYPE data));

#endif /* LIST_H */
