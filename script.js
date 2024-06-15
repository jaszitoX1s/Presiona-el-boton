document.getElementById('motivationButton').addEventListener('click', function() {
    const message = document.getElementById('message');
    message.classList.remove('hidden');
    message.style.display = 'block';
    
    // Cambiar la clase del body para cambiar la decoración de triste a feliz
    document.body.classList.remove('sad');
    document.body.classList.add('happy');
});
