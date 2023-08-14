// Practice set 3
// Practice set question.Question is taken from the PDF
//Q1
/*
const marks = {
    jaymin:100,
    dev:99,
    deep:98,
    jeel:55,
}

for(let i = 0; i < Object.keys(marks).length;i++){
    console.log("The marks of " + Object.keys(marks)[i] + " is " + marks[Object.keys(marks)[i]])
}
*/

/*  --> explain above for loops function use

for(let i = 0;i < Object.keys(marks).length;i++){
    //console.log(Object.keys(marks)) // Print all keys
    // console.log(Object.keys(marks)[i]) // Print all keys one by one
    console.log(marks[Object.keys(marks)[i]]) // Print all keys value
}
*/

// Q2
/*
const marks = {
    jaymin:100,
    dev:99,
    deep:98,
    jeel:55,
}

for(let a in marks){
    console.log("The marks of " + a + " is : " + marks[a]);
}
*/



//Q3
/*
let cn = 57;
let i;
while (i != cn) {
    i = prompt("Enter a number : ");
    if(cn != i){
        console.log("try again");
    }
}
console.log("You have entered correct no")

*/

//Q4
/*
const mean = (a, b, c, d) => {
    return (a + b + c + d) / 4;
}
console.log(mean(1,0,3,430));
*/