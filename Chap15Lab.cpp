//Blake Blakeslee
//Program Description

#include <iostream>
using namespace std;

class GradedActivity{
	private:
		double score; // overall score of activity
	public:
		GradedActivity() { // constructor sets score to 0 (if no score given)
			score = 0.0;
		}
		GradedActivity(double s) { // second constructor that sets predefined score
			score = s;
		}
		void setScore(double s) { // sets the score
			score = s;
		}
		double getScore() const { // returns the score
			return score;
		}
		char getLetterGrade() const; // defined below
};

char GradedActivity::getLetterGrade() const {
	char letterGrade;
	
	if (score > 89) {
		letterGrade = 'A';
		} else if (score > 79) {
			letterGrade = 'B';
		} else if (score > 69) {
			letterGrade = 'C';
		} else if (score > 59) {
			letterGrade = 'D';
		} else {
			letterGrade = 'F';
	}

	return letterGrade;
}

class Essay : public GradedActivity {
	private:
		double grammarScore;
		double grammarMax;
		double spellingScore;
		double spellingMax;
		double lengthScore;
		double lengthMax;
		double contentScore;
		double contentMax;
	public:
		Essay() {
			grammarMax = 30;
			spellingMax = 20;
			lengthMax = 20;
			contentMax = 30;
		}
		void askForScores(){
			cout << "Enter points received for grammar:";
			cin >> grammarScore;
			//input validation
			if (grammarScore > grammarMax) {
				grammarScore = grammarMax;
			} else if (grammarScore < 0){
				grammarScore = 0;
			}
			
			cout << "Enter points received for spelling:";
			cin >> spellingScore;
			//input validation
			if (spellingScore > spellingMax) {
				spellingScore = spellingMax;
			} else if (spellingScore < 0){
				spellingScore = 0;
			}
			
			cout << "Enter points received for correct length:";
			cin >> lengthScore;
			//input validation
			if (lengthScore > lengthMax) {
				lengthScore = lengthMax;
			} else if (lengthScore < 0){
				lengthScore = 0;
			}
			
			cout << "Enter points received for content:";
			cin >> contentScore;
			//input validation
			if (contentScore > contentMax) {
				contentScore = contentMax;
			} else if (contentScore < 0){
				contentScore = 0;
			}
			
			addUpScores();
		}
		double addUpScores(){
			double s;
			
			s = grammarScore + spellingScore + lengthScore + contentScore;
			setScore(s);
			
			return s;
		}
};

int main()
{
	Essay essay;
	
	essay.askForScores();
	
	cout << "Numeric Grade: " << essay.getScore() << endl;
	cout << "Letter Grade: " << essay.getLetterGrade() << endl;
	
	cout << endl;
	return 0;
}
