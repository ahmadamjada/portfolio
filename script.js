
    function toggleMenu() {
        var menu = document.getElementById("menu");
        if (menu.classList.contains("hidden")) {
            menu.classList.remove("hidden");
        } else {
            menu.classList.add("hidden");
        }
    }



    document.addEventListener('DOMContentLoaded', function() {
      const showMoreBtn = document.getElementById('show-more-btn');
      const showLessBtn = document.getElementById('show-less-btn');
      const hiddenCards = document.querySelectorAll('.hidden-cards');
      const cardContainer = document.getElementById('card-container');
  
      // Initially show only the first 6 cards
      function showInitialCards() {
          const cards = cardContainer.querySelectorAll('.card');
          for (let i = 6; i < cards.length; i++) {
              cards[i].classList.add('hidden');
          }
      }
  
      // Show more cards
      showMoreBtn.addEventListener('click', function() {
          hiddenCards.forEach(card => {
              card.classList.remove('hidden');
          });
          showMoreBtn.classList.add('hidden');
          showLessBtn.classList.remove('hidden');
      });
  
      // Show less cards
      showLessBtn.addEventListener('click', function() {
          hiddenCards.forEach(card => {
              card.classList.add('hidden');
          });
          showMoreBtn.classList.remove('hidden');
          showLessBtn.classList.add('hidden');
      });
  
      // Initialize cards
      showInitialCards();
  });
  
