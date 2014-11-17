twitter
=======
The IOS project is used to search twitter using Twitter API 1.1 and show the search tweet to user. These tweets can be saved locally for viewing later.

Prerequisite:

•	User needs to have Internet connection to search for tweet
•	Permission should be given for the app to access twitter
•	At least 1 twitter account should be set in the setting in simulator or IPhone

 All these conditions are checked in the app to inform user if any of them doesn’t satisfy

Functionality:

Search tweet:
•	This function user Twitter API to search for tweets based on the search string
•	 The amount of tweet retrieved at a time is 25 this can be changed to max of 100 by changing RESULTS_PERPAGE parameter
•	After reaching last row next set of rows are automatically retrieved
•	The function uses SDWebImage to load the profile picture asynchronously

Add tweet:
•	This function allows the user to save the tweet locally
•	Name, profile picture and the tweet are saved locally

View saved Tweet:
•	This function allows the user view and delete to saved tweets

Frameworks used:

Social and Accounts frameworks- Get access and search for tweets
SDWebImage and ImageIO frameworks - Load the profile picture asynchronously
Core Data framework- To save the tweet locally
NSURLConnection framework- Getting data from twitter API

