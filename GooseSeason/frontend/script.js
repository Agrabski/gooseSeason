// Get modal element
var modalReg = document.getElementById('registerModal');
// Get open modal button
var modalBtnReg = document.getElementById('registerBtn');
// Get close button
var closeBtnReg = document.getElementsByClassName('closeBtn')[0];

var modalSign = document.getElementById('signinModal');
var modalBtnSign = document.getElementById('signinBtn');
var closeBtnSign = document.getElementsByClassName('closeBtn')[1];

var noAccountLink = document.getElementById('noAccount');

// Listen for open click
modalBtnReg.addEventListener('click', openRegModal);
// Listen for close click
closeBtnReg.addEventListener('click', closeModal);
// Listen for outside click
window.addEventListener('click', outsideClick);

modalBtnSign.addEventListener('click', openSignModal);
closeBtnSign.addEventListener('click', closeModal);

noAccountLink.addEventListener('click', openRegModalFromSign);

// Function to open modal
function openRegModal()
{
  modalReg.style.display = 'block';
}

function openSignModal()
{
  modalSign.style.display = 'block';
}

function openRegModalFromSign()
{
  modalSign.style.display = "none";
  modalReg.style.display = 'block';
}

// Function to close modal
function closeModal()
{
  modalReg.style.display = 'none';
  modalSign.style.display = 'none';
}

// Function to close modal if outside click
function outsideClick(e)
{
  if(e.target == modalReg || e.target == modalSign)
  {
    modalReg.style.display = 'none';
    modalSign.style.display = 'none';
  }
}