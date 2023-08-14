/*  This is the first program of array
Array :- Array is nothing but collection similar data types.
syntax:-
      Data_type Array_name [size];

*/

var name = ["jaymin", 55, 'a', "male", true, "devange", "bhargav", "hashal"];
    // "jaymin" is ka defined as (lower index)
    // "harshal" is a defined as (upper boundry)

for (var i = 0; i < name.length; i++) {
    console.log(name[i]);
}

console.log(name.length);