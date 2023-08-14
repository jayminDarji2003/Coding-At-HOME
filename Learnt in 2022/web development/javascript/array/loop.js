//for loop
var name = ["jaymin", "devange", "bhargav", "hashal", "deep", "jeel"];

//for loop
// for(let i=0;i<name.length;i++){
//     console.log(name[i]);
// }

//for in loop
// for(let elements in name){
//     console.log(elements);
// }

//for of loop
// for(let elements of name){
//         console.log(elements);
//  }

//for each loop

    name.forEach(function(elements,index,array){
            console.log(elements + " index : " + index + " " + array );
    });