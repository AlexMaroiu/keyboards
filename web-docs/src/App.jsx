import './App.css'
import Home from './pages/Home'
import Wired from './pages/Wired'
import Wireless from './pages/Wireless'
import { Route, Routes } from 'react-router-dom'


export default function App() {
  return (
    <Routes>
      <Route path="/" element={<Home />} />
      <Route path="/wired" element={<Wired />} />
      <Route path="/wireless" element={<Wireless />} />
    </Routes>
  )
}
