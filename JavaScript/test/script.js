if(typeof(Storage) !== undefined)
{
    localStorage.setItem("Name" , "Mohit Bishnoi");

    document.getElementById('hello').innerHTML = localStorage.getItem("Name");

}

else{
    document.getElementById('hello').innerHTML = "Your browser does not support the local storage";
}