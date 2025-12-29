import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'


function Section({ title, children }) {
  return (
    <section>
      <h2>{title}</h2>
      {children}
    </section>
  )
}

export default function App() {
  return (
    <main>
      <h1>My Keyboard Documentation</h1>

      <Section title="Overview">
        <p>Custom mechanical keyboard using QMK firmware.</p>
      </Section>

      <Section title="Layers">
        <ul>
          <li>Base Layer</li>
          <li>Function Layer</li>
          <li>Media Layer</li>
        </ul>
      </Section>

      <Section title="Key Combos">
        <p><strong>Fn + J</strong> → Left Arrow</p>
        <p><strong>Fn + L</strong> → Right Arrow</p>
      </Section>
    </main>
  )
}
