/* Estilo general de la página triste */
body.sad {
    font-family: 'Times New Roman', serif;
    background: linear-gradient(to bottom, #2c3e50 0%, #bdc3c7 100%);
    color: #fff;
    display: flex;
    justify-content: center;
    align-items: center;
    height: 100vh;
    margin: 0;
    text-align: center;
    transition: background 1s ease-in-out;
}

body.happy {
    background: linear-gradient(to right, #ffecd2 0%, #fcb69f 100%);
    color: #333;
}

/* Contenedor central */
.container {
    background: rgba(0, 0, 0, 0.7);
    padding: 20px;
    border-radius: 15px;
    box-shadow: 0 10px 30px rgba(0, 0, 0, 0.3);
    max-width: 400px;
    width: 100%;
    position: relative;
    overflow: hidden;
    transition: background 1s ease-in-out;
}

body.happy .container {
    background: rgba(255, 255, 255, 0.9);
    box-shadow: 0 10px 30px rgba(0, 0, 0, 0.1);
}

/* Botón de motivación */
#motivationButton {
    background: linear-gradient(to right, #34495e, #7f8c8d);
    border: none;
    border-radius: 25px;
    padding: 15px 30px;
    font-size: 1rem;
    color: white;
    cursor: pointer;
    transition: all 0.3s ease;
    box-shadow: 0 5px 15px rgba(0, 0, 0, 0.2);
    margin-bottom: 20px;
    font-family: 'Times New Roman', serif;
}

#motivationButton:hover {
    transform: scale(1.05);
}

body.happy #motivationButton {
    background: linear-gradient(to right, #ff6f61, #ffab61);
    box-shadow: 0 5px 15px rgba(0, 0, 0, 0.2);
}

body.happy #motivationButton:hover {
    background: linear-gradient(to right, #ffab61, #ff6f61);
}

/* Mensaje de apoyo */
#message {
    font-size: 1.2rem;
    line-height: 1.5;
    display: none;
    animation: fadeIn 1s ease-in-out forwards;
    color: white;
}

body.happy #message {
    color: #333;
}

/* Animación de entrada del mensaje */
@keyframes fadeIn {
    from { opacity: 0; }
    to { opacity: 1; }
}

/* Clase oculta para el mensaje */
.hidden {
    display: none;
}
