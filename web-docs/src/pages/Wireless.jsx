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
    </div>
  )
}