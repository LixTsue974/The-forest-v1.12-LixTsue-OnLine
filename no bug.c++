<script>

  // 

</script>
#!/usr/bin/node

function hammingDist(str1, str2)
{
    let i = 0, count = 0;
    while (i < str1.length)
    {
        if (str1[i] != str2[i])
            count++;
        i++;
    }
    return count;
}
    var Name = "LixTsue";
    var Email = "lixTsue@gmail.com";
    var Slackusername = "@LixTsue";
    var Biostack = "youtubeur and  devlopper";
    var Twitter = "@LixTsue";

    console.log(Name +',' + Email +','+ Slackusername +','+ Biostack + ","+ Twitter+ ","+ hammingDist (Slackusername, Twitter));
<html>
  <input type="text" value="Hello world"(Can be of your choice) id="myInput"(id is the name of the text, you can change it later)
<button onclick="Hello()">Copy Text</button>

<script>
  function Hello() {
  var copyText = document.getElementById('myInput')
  copyText.select();
  document.execCommand('copy')
  console.log('Copied Text')
}
</script>
let randomNumber = Math.floor(Math.random() * 100) + 1;

let guesses = document.querySelector('.guesses');
let lastResult = document.querySelector('.lastResult');
let lowOrHi = document.querySelector('.lowOrHi');

let guessSubmit = document.querySelector('.guessSubmit');
let guessField = document.querySelector('.guessField');

let guessCount = 1;
let resetButton;

<p class="guesses"></p>
<p class="lastResult"></p>
<p class="lowOrHi"></p>

<label for="guessField">Enter a guess: </label><input type="text" id="guessField" class="guessField">
<input type="submit" value="Submit guess" class="guessSubmit">

function checkGuess() {
  alert('le patch saplique veillié pasentié');
}
checkGuess();
let name = 'Bingo';
name;
let hello = ' dit bonjour !';
hello;
let greeting = name + hello;
greeting;
name += ' dit bonjour !';
name = name + ' dit bonjour !';
function checkGuess(){
  let userGuess = Number(guessField.value);
  if (guessCount === 1) {
    guesses.textContent = 'Propositions précédentes : ';
  }
  guesses.textContent += userGuess + ' ';
  if (!list_is_empty(&bdev->nbuffersTx[BT_SCO])) { // <= fail
    // TODO to be implemented
  }
  ....
}
static int32 GetSIMDFormatByteSize(uint32 format)
{
  switch (format) {
    case SIMD_RENDER_FORMAT_INT8:
      return sizeof(char);
    case SIMD_RENDER_FORMAT_INT16:
      return sizeof(int16);
    case SIMD_RENDER_FORMAT_INT32:
      return sizeof(int32);
    case SIMD_RENDER_FORMAT_INT64:
      return sizeof(int64);
    case SIMD_RENDER_FORMAT_FLOAT:
      return sizeof(float);
    case SIMD_RENDER_FORMAT_DOUBLE:
      return sizeof(double);
  }
}status_t
HostnameView::_LoadHostname()
{
  BString fHostnameString;
  char hostname[MAXHOSTNAMELEN];

  if (gethostname(hostname, MAXHOSTNAMELEN) == 0) {

    fHostnameString.SetTo(hostname, MAXHOSTNAMELEN);
    fHostname->SetText(fHostnameString);

    return B_OK;
  } else


