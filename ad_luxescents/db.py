
import mysql.connector

db_config = {
    'host': 'localhost',
    'user': 'yandah',
    'password': 'your_password', #put your actual pass
    'database': 'ad_luxe_db',  # Change this to your actual database name
}

# Establish a connection to the database
connection = mysql.connector.connect(**db_config)

# Create a cursor object to execute queries
cursor = connection.cursor()

def connect_to_database():
    try:
        connection.ping(reconnect=True, attempts=3, delay=5, backoff=2)
        print("Connection to the database has been established successfully.")
    except mysql.connector.Error as err:
        print(f"Unable to connect to the database: {err}")

def execute_query(query):
    try:
        cursor.execute(query)
        result = cursor.fetchall()
        return result
    except mysql.connector.Error as err:
        print(f"Error executing query: {err}")
        raise err

# Example query
query = "SELECT * FROM your_table"
connect_to_database()
result = execute_query(query)
print("Query Result:", result)

# Close the connection
connection.close()
