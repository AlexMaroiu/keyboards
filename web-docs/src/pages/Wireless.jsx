export default function Wireless() {
  return (
    <div>
      <h1>Instructiuni pentru tastaturile wireless</h1>
      <ol>
        <li>Pentru a modifica configuratia tastaturi se poate folosii Zmk Studio (https://zmk.studio/) (https://zmk.studio/download)</li>
        <li>Pentru a incarca bateria trebuie ca tastatura sa fie pornita (bateria connectata).
            Pentru a stii daca se incarca atunciun bec albastru va lumina constant putin timp. Daca becul sclipeste atunci nu se incarca (bateria e deconectata). </li>
        <li><p>Daca nu se conecteaza la PC atunci este posibil ca profilul bluetooth sa fie sters sau cu alta configuratie.</p>
            <p>Cel mai bine este sa se stearga profilul bluetooth din tastatura (tasta BT_CLR si apoi BT_DISC_*  ) si PC (forget device).</p>
            <p>Pentru a afla tasta se poate conecta tastatura la usb si prin Zmk studio se poate gasii tastele (de obicei pe layer 3)</p>
        </li>
      </ol>
      <h3>Pnetru a intra in bootloader:</h3>
      <ol>
        <li>Descarca arhiva firmware.zip si dezarhiveaza-o intr-un folder nou (neaparat trebuie dezarhivat fisierul .zip)</li>
        <li>Conecteaza tastatura prin usb la pc</li>
        <li>Apasa de 2 ori consecutiv pe butonul galben de sub ecran, pentru a intra in bootloader</li>
        <li>O sa apara un drive nou in pc cu numele de Nano (sau nicenano)</li>
        <li>Se copiaza fisierul de hex pentru fiecare jumatate din folder (daca se copiaza direct din arhiva se strica microcontrollerul, deci trebuie fisierul din folderul nou) (pentru partea stanga se copiaza fisierul _left si la fel pentru dreapta)</li>
        <li>Tastatura o sa se reseteze singura dupa ce s-a terminat de copiat, si ar trebuie sa se conecteze singura la pc din nou (nu s-a sters datele vechi de la pairing). Daca nu se conecteaza ar fi bine sa se reseteze profilul Bluetooth din pc si tastatura.</li>
      </ol>
    </div>
  )
}