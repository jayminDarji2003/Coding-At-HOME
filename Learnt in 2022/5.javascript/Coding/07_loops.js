// There are 5 types of loop in javaScript
/*
    1.for loop
    2.for in loop
    3.for of loop
    4.while loop
    5.do-while loop
*/

// Let's see the example of all loops

//--> for loop

// for(let i = 0; i < 50; i++){
//     console.log(i);
// }

// Program :- To print sum of n natural number

// let sum = 0;
// let n = prompt("Enter the number : ");
// n = Number.parseInt(n);
// for (let i = 1; i < n; i++) {
//     sum += i;
// }
// console.log("The sum of " + n + "natural number is : " + sum);


// for in loop
    //--> The for in loop is used when we have object

// let obj = {
//     jaymin : 99,
//     deep : 98,
//     jeel : 88,
//     devang : 77,
//     harshal : 11
// }

// for(let a in obj){
//     //console.log(a)  // use this syntax to print key of an object
//     console.log("The marks of " + a +" are : " + obj[a])
// }


// for of loop :- The for of loop is used for arrays and string

// const car =["bmw","audi","jaguar"];

// for(let a of car){
//     console.log(a)
// }

// while loop

// let i = 1;
// while(i < 10){
//     console.log(i);
//     i++;
// }


// do-while loop

// let i = 1;
// do{
//     console.log(i);
//     i++;
// }while(i<10);