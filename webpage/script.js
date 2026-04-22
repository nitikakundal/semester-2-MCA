// Theme Toggle Logic
const themeToggle = document.getElementById('theme-toggle');
const htmlElement = document.documentElement;

themeToggle.addEventListener('click', () => {
    const currentTheme = htmlElement.getAttribute('data-theme');
    if (currentTheme === 'dark') {
        htmlElement.removeAttribute('data-theme');
        themeToggle.innerHTML = '<i class="fas fa-moon"></i>';
    } else {
        htmlElement.setAttribute('data-theme', 'dark');
        themeToggle.innerHTML = '<i class="fas fa-sun"></i>';
    }
});

// Search Logic
function handleSearch() {
    const input = document.getElementById('searchInput').value.toLowerCase();
    
    if (input.includes('about')) {
        document.getElementById('about').scrollIntoView({ behavior: 'smooth' });
    } else if (input.includes('contact')) {
        document.getElementById('contact').scrollIntoView({ behavior: 'smooth' });
    } else if (input.includes('home')) {
        document.getElementById('home').scrollIntoView({ behavior: 'smooth' });
    } else {
        alert("Try searching for 'about' or 'contact'");
    }
}