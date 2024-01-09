function age ()
{
    let age_year = document.getElementById("num1").value;
    let curr_year = new Date().getFullYear()
    let result;

    result = curr_year-age_year;
    document.getElementById("numx").innerHTML=result;

}