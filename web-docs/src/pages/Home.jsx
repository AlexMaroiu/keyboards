import { Link } from 'react-router-dom'

export default function Home() {
  return (
    <div className="container">
      <h1>Instructiuni</h1>
      <div className="buttons">
        <Link to="/wired">
          <button>Wired Keyboard</button>
        </Link>
        <Link to="/wireless">
          <button>Wireless Keyboard</button>
        </Link>
      </div>
    </div>
  )
}