from db import connect_to_database, execute_query

# Connect to the database
connect_to_database()

# Example query
query = "SELECT * FROM your_table"
result = execute_query(query)
print("Query Result:", result)

# Close the connection when done
connection.close()
