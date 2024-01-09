function swap()
{
    let x = document.getElementById("num1").value;
    let y = document.getElementById("num2").value;
    let z;
    document.getElementById("numx").innerHTML = x;
    document.getElementById("numy").innerHTML = y;

    z=y;
    y=x;
    x=z;
    document.getElementById("x").innerHTML = x;
    document.getElementById("y").innerHTML = y;

}

