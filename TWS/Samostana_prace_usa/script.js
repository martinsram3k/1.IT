// Definujeme dvě zprávy, které se budou střídat
const zprava1 = "🟦🟥 Vítejte v USA 🇺🇸";
const zprava2 = "🟥🟦 Jsme nejelpší! 🌟";


let ukazujiPrvni = true;


setInterval(() => {
    if (ukazujiPrvni) {
   
        document.title = zprava2;
    } else {
       
        document.title = zprava1;
    }
    
    
    ukazujiPrvni = !ukazujiPrvni;

}, 100); 