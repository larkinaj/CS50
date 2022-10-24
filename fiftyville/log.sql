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

-- Used to check the bank account of the people that used the atm on Leggett street that morning
SELECT person_id, creation_year, account_number FROM bank_accounts WHERE account_number IN (SELECT account_number FROM atm_transactions WHERE month = 7 AND day = 28 AND year = 2021 AND atm_location = "Leggett Street");

-- Used to check the names of the people with the back account from the previous query
SELECT id, name, phone_number FROM people WHERE id IN (SELECT person_id  FROM bank_accounts WHERE account_number IN (SELECT account_number FROM atm_transactions WHERE month = 7 AND day = 28 AND year = 2021 AND atm_location = "Leggett Street"));


-- Used to check the schema of phone_calls
.schema phone_calls

-- Raymond said the thief called someone for less than a minute as he was leaving the bakery and asked the other person to purchase the earliest flight out of fiftyville. This query checks phones calls that day that were less than a minute.
SELECT caller, receiver, duration FROM phone_calls WHERE month = 7 AND day = 28 AND year = 2021 AND duration <= 60;

-- Used to find the names of people that fit the previous query.
SELECT id, name, phone_number FROM people WHERE phone_number IN (SELECT caller FROM phone_calls WHERE month = 7 AND day = 28 AND year = 2021 AND duration <= 60);


-- Used to create a suspect list that narrows down the suspects by phone numbers, atm tranactions, and license plates.
SELECT id, name, passport_number FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND year = 2021 AND hour = 10 AND minute BETWEEN 15 AND 25) AND id IN (SELECT person_id  FROM bank_accounts WHERE account_number IN (SELECT account_number FROM atm_transactions WHERE month = 7 AND day = 28 AND year = 2021 AND atm_location = "Leggett Street")) AND phone_number IN (SELECT caller FROM phone_calls WHERE month = 7 AND day = 28 AND year = 2021 AND duration <= 60);


-- Used to find all the passengers that match the passport number of the two suspects
SELECT flight_id, passport_number, seat FROM passengers WHERE passport_number IN (SELECT passport_number FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND year = 2021 AND hour = 10 AND minute BETWEEN 15 AND 25) AND id IN (SELECT person_id  FROM bank_accounts WHERE account_number IN (SELECT account_number FROM atm_transactions WHERE month = 7 AND day = 28 AND year = 2021 AND atm_location = "Leggett Street")) AND phone_number IN (SELECT caller FROM phone_calls WHERE month = 7 AND day = 28 AND year = 2021 AND duration <= 60));

-- Used to find all the flights that the passengers from the previous query are taking.
SELECT id, origin_airport_id, destination_airport_id, month, day, year, hour, minute FROM flights WHERE id IN(SELECT flight_id FROM passengers WHERE passport_number IN (SELECT passport_number FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND year = 2021 AND hour = 10 AND minute BETWEEN 15 AND 25) AND id IN (SELECT person_id  FROM bank_accounts WHERE account_number IN (SELECT account_number FROM atm_transactions WHERE month = 7 AND day = 28 AND year = 2021 AND atm_location = "Leggett Street")) AND phone_number IN (SELECT caller FROM phone_calls WHERE month = 7 AND day = 28 AND year = 2021 AND duration <= 60)));






