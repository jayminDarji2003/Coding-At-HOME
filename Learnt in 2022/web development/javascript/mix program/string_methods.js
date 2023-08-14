
// This is the topic of string methos.

let name = "jaymin"
console.log(name);

// find length
//length is a property

console.log(name.length);

//uppercase function

console.log(name.toUpperCase());

//lowercase function

console.log(name.toLowerCase());

//slice function....to cut the string
// -->slice take two or one argument
//first one is to start
//second one is to end 

//start 2 and end 4 ,but not take 4th one.
console.log(name.slice(2, 4))

//start 2 ,and end till the string end .
let a = "jaymin darji"
console.log(a.slice(2));

//  replace function
let naam="devang bhai"
console.log(naam.replace("bhai","bhaai"));  

//  concate function.......join to the last

let aa="didi"
let b="pooja\'s"
console.log(aa.concat(" is a friend of ",b," best friend"));

//trim function
let friend="           meena"
console.log(friend)
console.log(friend.trim())  // remove all space 


//print string using for loop

let jiya="jiya is my best friend"
for(let i=0;i<jiya.length;i++){
    console.log(jiya[i])
}