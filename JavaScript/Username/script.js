let UserName = document.getElementById('UsrName').value;
let usrName;

function NewUsrName()
{
    usrName = `@${UserName}${UserName.length}`;
    document.getElementById('UsrName_1').innerHTML= usrName;
}