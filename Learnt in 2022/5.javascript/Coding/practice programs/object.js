// To make an object

const item = {
    apple: 10,
    banana:30,
    cherry:60,
    mix:70
}

// console.log(item["apple"]);
// console.log(item.apple);
// console.log(Object.keys(item));

for(let a in item){
    console.log(a);
    console.log(item[a]);
}

