<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Kibe Adventures - Explore Kenya</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 0;
            padding: 0;
            background-color: #f4f4f4;
        }
        header {
            background-color: #004d00;
            color: white;
            padding: 20px;
            text-align: center;
        }
        nav {
            display: flex;
            justify-content: space-around;
            padding: 10px;
            background-color: #008000;
        }
        nav a {
            color: white;
            text-decoration: none;
            padding: 10px;
        }
        nav a:hover {
            background-color: #005700;
        }
        .hero {
            background-image: url('https://www.example.com/kenya-wildlife.jpg');
            height: 400px;
            background-size: cover;
            background-position: center;
            text-align: center;
            color: white;
            display: flex;
            align-items: center;
            justify-content: center;
        }
        .hero h1 {
            font-size: 50px;
        }
        .destinations, .contact {
            padding: 20px;
        }
        .destinations h2, .contact h2 {
            text-align: center;
            color: #004d00;
        }
        .destination-list {
            display: grid;
            grid-template-columns: repeat(auto-fill, minmax(200px, 1fr));
            gap: 20px;
            margin-top: 20px;
        }
        .destination-list div {
            background-color: #fff;
            padding: 20px;
            box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
            text-align: center;
            border-radius: 10px;
        }
        footer {
            text-align: center;
            padding: 20px;
            background-color: #004d00;
            color: white;
        }
    </style>
</head>
<body>
    <header>
        <h1>Welcome to Kibe Adventures</h1>
        <p>Your gateway to discovering the beauty of Kenya!</p>
    </header>

    <nav>
        <a href="#destinations">Explore Destinations</a>
        <a href="#contact">Contact Us</a>
    </nav>

    <section class="hero">
        <h1>Discover Kenya's Wildlife & Beyond!</h1>
    </section>

    <section class="destinations" id="destinations">
        <h2>Explore Kenyan Counties with Kibe Adventures</h2>
        <div class="destination-list">
            <div><h3>Nairobi County</h3><p>Home to Nairobi National Park</p></div>
            <div><h3>Mombasa County</h3><p>Explore the beautiful beaches of Diani and the historic Fort Jesus</p></div>
            <div><h3>Kisumu County</h3><p>Visit Lake Victoria and enjoy stunning sunsets</p></div>
            <div><h3>Laikipia County</h3><p>Discover the wildlife at Ol Pejeta Conservancy</p></div>
            <div><h3>Nakuru County</h3><p>Flamingo paradise at Lake Nakuru</p></div>
            <div><h3>Machakos County</h3><p>Experience the scenic views of Machakos hills</p></div>
            <div><h3>Nyeri County</h3><p>Visit Aberdare National Park</p></div>
            <div><h3>Turkana County</h3><p>Explore the unique beauty of Lake Turkana</p></div>
            <!-- Add more counties as needed -->
        </div>
    </section>

    <section class="contact" id="contact">
        <h2>Contact Kibe Adventures</h2>
        <p>For any inquiries or bookings, feel free to reach out to us:</p>
        <p><strong>Phone:</strong> 0711 682 494</p>
        <p><strong>Email:</strong> <a href="mailto:kibe@gmai.com">kibe@gmai.com</a></p>
    </section>

    <footer>
        <p>&copy; 2024 Kibe Adventures. All Rights Reserved.</p>
    </footer>
</body>
</html>
