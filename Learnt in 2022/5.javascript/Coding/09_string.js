// String :- In simple words string is collection of character

let name = "jaymin";
    //or
let Name = "jaymin";

console.log(name);
console.log(name.length);

    //This syntax is same as Array
for(let i = 0; i < name.length;i++){
    console.log(name[i]);
} 


// Template literals

let boy1 = "nikhil";
let boy2 = "subham";
let sentence = `${boy1} is a friend of ${boy2}`;
console.log(sentence);

// Escape sequence character

let friend = "bhargav\'s";
console.log(friend);