# Predicting Loan Approvals Using ML Algorithms


## About The Project
The motivation behind the project is to automate the loan eligibelity process based on customer details  provided while filling the application form. To automate the process we will try to identify the customers segment, those who are eligible for getting the loan.





## Problem Definition
### Data Description
The data set was collected from [Kaggle](https://www.kaggle.com/datasets/sonalisingh1411/loan-approval-prediction). There are 614 instances and 13 variables in our dataset. 
The 12 input variables or features are: 
* Loan_ID = Unique Loan ID.
* Gender = Gender of Applicant - Male/Female.
* Married = Marrital Status of Applicants - Yes/No.
* Education = Educational Status Of The Applicant - Graduate/Non-Graduate.
* Dependents = The number of people who are dependent on the applicant - 0, 1, 2, or 3+.
* Applicant Income = The income of the applicant.
* CoApplicant Income = The income of the Coapplicant.
* Loan Amount = The amount of Loan which is proposed by the customer in thousands.
* Credit History = Previous credit record - Yes/No.
* Property Area = The type of area where the applicant's property is situated - Rural, Urban, or Semiurban.
* Loan Amount Term = Term of the Loan in Months. 

The output or target variable is Loan_status which indicates whether the loan corresponding to the Loan_IDs are approved or not.  

### Data Pre-processing methods 


### Models
The following classifiers have been used in this project:
* Logistic Regression.
* Decision Tree Classifier.
* Random Forest Classifier.
* Support Vector Machine.

### Cross-Validation Techniques



### Performance Indices
In general, when evaluating the fulfilment of predictive models, it is critical to examine the model's achievement using a variety of evaluation indices to select the optimal model. 
The following metrics have been used in this project:
* Accuracy.
* Precision.
* Recall. 
* F1 Score.

Mostly, we've used F1 score, since it combines the measures Precision and Recall in a single metrics.



