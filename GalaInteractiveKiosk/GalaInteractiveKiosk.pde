
AnimationsManager animationsManager;
FontsManager fontsManager;
ImagesManager imagesManager;
QuestionsManager questionsManager;

AbstractAnimation dailyAnimation;


void setup () {
  
  //size(1024, 768);
  fullScreen();
  smooth();
  frameRate(60);
  textAlign(CENTER,CENTER);
  
  animationsManager = new AnimationsManager(this);
  fontsManager = new FontsManager();
  imagesManager = new ImagesManager();
  questionsManager = new QuestionsManager();
  
  animationsManager.initAnimations();
  getRandomElements();

}

void getRandomElements() {
  
  dailyAnimation = animationsManager.getRandomAnimation();
  dailyAnimation.font = fontsManager.getRandomFont();
  dailyAnimation.image = imagesManager.getRandomPNG();
  dailyAnimation.background = imagesManager.getRandomBack();
  dailyAnimation.question = questionsManager.getCurrentQuestion();
  dailyAnimation.imgOrVec = (int)random(2);
  
  dailyAnimation.setup();
}

void draw() {
  if (dailyAnimation != null) dailyAnimation.draw();
}

void update() {
   if (dailyAnimation != null) dailyAnimation.update();
}

void keyPressed () {
  
   if (dailyAnimation != null)
   {
     dailyAnimation.keyPressed(key);
     switch(key) {
        case '0': 
           getRandomElements();
           break;
     }
   }
}