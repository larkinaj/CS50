-- Keep a log of any SQL queries you execute as you solve the mystery.

-- Used to check the tables in the db
.tables

-- Used to check the schema of crime_scene_reports
.schema crime_scene_reports

-- Used to check the crime scene report for the duck theft incident
SELECT description FROM crime_scene_reports WHERE month = 7 AND day = 28 AND street = "Humphrey Street"

-- Used to check the schema of bakery_security_logs
.schema bakery_security_logs

-- Ruth said that the thief got in a car within 10 minutes of the crime. This query is used to check all license plates that left 10 minutes after the theft
SELECT hour, minute, activity, license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND year = 2021 AND hour = 10 AND minute BETWEEN 15 AND 25;

-- Used to check the peoples name of the license plates that left 10 minutes after the theft
SELECT id, name, license_plate FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND year = 2021 AND hour = 10 AND minute BETWEEN 15 AND 25);

-- Used to check the schema of atm_transactions
.schema atm_trasactions

-- Eugene said the thief was withdrawing money at the ATM on Leggett street earlier that morning. This query is used to check the atm transactions that occured on Leggett street that morning.
SELECT amount, account_number, transaction_type FROM atm_transactions WHERE month = 7 AND day = 28 AND year = 2021 AND atm_location = "Leggett Street";

-- Used to check the names of the people that were at the atm on Leggett street that morning
SELECT id, name, license_plate FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND year = 2021 AND hour = 10 AND minute BETWEEN 15 AND 25);


















