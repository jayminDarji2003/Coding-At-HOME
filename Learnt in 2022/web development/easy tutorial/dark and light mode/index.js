// let toggleBtn = document.getElementById('toggle-btn');
// let body = document.body;
// let darkMode = localStorage.getItem('dark-mode');

// // Function for dark mode
// const enableDarkMode = () => {
//     toggleBtn.classList.replace('fa-sun', 'fa-moon');
//     body.classList.add('dark');
//     localStorage.setItem('dark-mode', 'enabled');
// }
// // Function for white mode
// const disaleDarkMode = () => {
//     toggleBtn.classList.replace('fa-moon', 'fa-sun');
//     body.classList.remove('dark');
//     localStorage.setItem('dark-mode', 'disable');
// }

// if (darkMode === 'enabled') {
//     enableDarkMode();
// }

// toggleBtn.onclick = () => {
//     darkMode = localStorage.getItem('dark-mode');
//     if (darkMode === 'disable') {
//         enableDarkMode();
//     }
//     else {
//         disaleDarkMode();
//     }
// }


// let toggleBtn = document.getElementById('toggle-btn');
// let body = document.body;
// let darkMode = localStorage.getItem('dark-mode');

// const enableDarkMode = () =>{
//    toggleBtn.classList.replace('fa-sun', 'fa-moon');
//    body.classList.add('dark');
//    localStorage.setItem('dark-mode', 'enabled');
// }

// const disableDarkMode = () =>{
//    toggleBtn.classList.replace('fa-moon', 'fa-sun');
//    body.classList.remove('dark');
//    localStorage.setItem('dark-mode', 'disabled');
// }

// if(darkMode === 'enabled'){
//    enableDarkMode();
// }

// toggleBtn.onclick = () =>{
//    darkMode = localStorage.getItem('dark-mode');
//    if(darkMode === 'disabled'){
//       enableDarkMode();
//    }else{
//       disableDarkMode();
//    }
// }


let toggleBtn = document.getElementById('toggle-btn');
let body = document.body;
let darkMode = localStorage.getItem('dark-mode');

const enableDarkMode = () =>{
   toggleBtn.classList.replace('fa-sun', 'fa-moon');
   body.classList.add('dark');
   localStorage.setItem('dark-mode', 'enabled');
}

const disableDarkMode = () =>{
   toggleBtn.classList.replace('fa-moon', 'fa-sun');
   body.classList.remove('dark');
   localStorage.setItem('dark-mode', 'disabled');
}

if(darkMode === 'enabled'){
   enableDarkMode();
}

toggleBtn.onclick = (e) =>{
   darkMode = localStorage.getItem('dark-mode');
   if(darkMode === 'disabled'){
      enableDarkMode();
   }else{
      disableDarkMode();
   }
}