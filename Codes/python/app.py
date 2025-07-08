# import tkinter as tk
# import random

# # Create the main window
# root = tk.Tk()
# root.title("Calculator")
# root.geometry("400x500")
# root.configure(bg="#2C2F33")

# # Function to center window on screen
# def center_window():
#     root.update_idletasks()
#     width = root.winfo_width()
#     height = root.winfo_height()
#     x = (root.winfo_screenwidth() // 2) - (width // 2)
#     y = (root.winfo_screenheight() // 2) - (height // 2)
#     root.geometry(f"{width}x{height}+{x}+{y}")

# root.bind("<Configure>", lambda e: center_window())

# # Display frame
# display_frame = tk.Frame(root, bg="#23272A")
# display_frame.pack(expand=True, fill="both")

# # Display label
# display_var = tk.StringVar()
# display_label = tk.Label(display_frame, textvariable=display_var, anchor="e",
#                          bg="#99AAB5", fg="#23272A", font=("Arial", 30), padx=10)
# display_label.pack(expand=True, fill="both")

# # Button frame
# button_frame = tk.Frame(root)
# button_frame.pack(expand=True, fill="both")

# # Button click event
# def button_click(value):
#     current_text = display_var.get()
#     if value == "=":
#         try:
#             # Evaluating the expression safely
#             result = eval(current_text)
#             display_var.set(str(result))
#         except Exception:
#             display_var.set("Error")
#     elif value == "C":
#         display_var.set("")
#     else:
#         display_var.set(current_text + value)

# # Shuffle number buttons
# def shuffle_buttons():
#     number_buttons = ["0", "1", "2", "3", "4", "5", "6", "7", "8", "9"]
#     random.shuffle(number_buttons)
# #     for i, btn_text in enumerate(number_buttons):
# #         btn_dict[btn_text].grid(row=i // 3, column=i % 3, sticky="nsew")

# # # Button labels and layout
# # buttons = [
# #     ("7", 1, 0), ("8", 1, 1), ("9", 1, 2), ("/", 1, 3),
# #     ("4", 2, 0), ("5", 2, 1), ("6", 2, 2), ("*", 2, 3),
# #     ("1", 3, 0), ("2", 3, 1), ("3", 3, 2), ("-", 3, 3),
# #     ("C", 4, 0), ("0", 4, 1), ("=", 4, 2), ("+", 4, 3),
# #     ("B", 5, 1)  # Shuffle button "B"
# # ]

# # btn_dict = {}
# # for (text, row, col) in buttons:
# #     action = shuffle_buttons if text == "B" else lambda val=text: button_click(val)
# #     btn = tk.Button(button_frame, text=text, font=("Arial", 18), 
# #                     bg="#7289DA", fg="white", width=4, height=2,
# #                     command=action)
# #     btn.grid(row=row, column=col, sticky="nsew")
# #     if text.isdigit():  # Store only number buttons
# #         btn_dict[text] = btn

# # # Configure rows and columns to be responsive
# # for i in range(4):
# #     button_frame.grid_columnconfigure(i, weight=1)
# # for i in range(5):
# #     button_frame.grid_rowconfigure(i, weight=1)

# # # Run the application
# # root.mainloop()

# import tkinter as tk
# import random

# # Initialize main window
# root = tk.Tk()
# root.title("Simple Calculator with Shuffle")
# root.geometry("300x400")

# # Display area
# display_var = tk.StringVar()
# display_label = tk.Label(root, textvariable=display_var, font=("Arial", 20), anchor="e", bg="lightgray")
# display_label.pack(fill="x", pady=10)

# # Basic button click function
# def button_click(value):
#     current_text = display_var.get()
#     if value == "=":
#         try:
#             result = eval(current_text)
#             display_var.set(str(result))
#         except Exception:
#             display_var.set("Error")
#     elif value == "C":
#         display_var.set("")
#     else:
#         display_var.set(current_text + value)

# # Shuffle function for number buttons
# def shuffle_buttons():
#     random.shuffle(numbers)
#     for i, btn in enumerate(numbers):
#         btn.grid(row=(i // 3) + 2, column=i % 3)

# # Frame for buttons
# button_frame = tk.Frame(root)
# button_frame.pack()

# # Numbers and operations buttons
# buttons = [
#     ("7", 0, 0), ("8", 0, 1), ("9", 0, 2), ("/", 0, 3),
#     ("4", 1, 0), ("5", 1, 1), ("6", 1, 2), ("*", 1, 3),
#     ("1", 2, 0), ("2", 2, 1), ("3", 2, 2), ("-", 2, 3),
#     ("C", 3, 0), ("0", 3, 1), ("=", 3, 2), ("+", 3, 3),
#     ("B", 4, 1)  # Shuffle button "B"
# ]

# # 

# import tkinter as tk

# # Initialize main window
# root = tk.Tk()
# root.title("Professional Calculator")
# root.geometry("350x500")
# root.configure(bg="black")

# # Display area
# display_var = tk.StringVar()
# display_label = tk.Label(root, textvariable=display_var, font=("Arial", 24), anchor="e", bg="white", fg="black")
# display_label.pack(fill="both", pady=15, padx=10)

# # Basic button click function
# def button_click(value):
#     current_text = display_var.get()
#     if value == "=":
#         try:
#             result = eval(current_text)
#             display_var.set(str(result))
#         except Exception:
#             display_var.set("Error")
#     elif value == "C":
#         display_var.set("")
#     else:
#         display_var.set(current_text + value)

# # Frame for buttons
# button_frame = tk.Frame(root, bg="black")
# button_frame.pack()

# # Colors
# button_bg = "#4A90E2"   # Blue color
# button_fg = "white"
# operator_bg = "#283593"  # Darker blue for operators

# # Numbers and operations buttons
# buttons = [
#     ("7", 1, 0), ("8", 1, 1), ("9", 1, 2), ("/", 1, 3),
#     ("4", 2, 0), ("5", 2, 1), ("6", 2, 2), ("*", 2, 3),
#     ("1", 3, 0), ("2", 3, 1), ("3", 3, 2), ("-", 3, 3),
#     ("C", 4, 0), ("0", 4, 1), ("=", 4, 2), ("+", 4, 3),
# ]

# # Adding buttons to grid with professional styling
# for (text, row, col) in buttons:
#     btn_color = operator_bg if text in "+-*/=" else button_bg
#     btn = tk.Button(button_frame, text=text, font=("Arial", 18), width=5, height=2,
#                     bg=btn_color, fg=button_fg, command=lambda val=text: button_click(val))
#     btn.grid(row=row, column=col, padx=5, pady=5)

# root.mainloop()


import tkinter as tk

# Initialize main window
root = tk.Tk()
root.title("Professional Calculator")
root.geometry("350x500")
root.configure(bg="black")

# Display area
display_var = tk.StringVar()
display_label = tk.Label(root, textvariable=display_var, font=("Arial", 24), anchor="e", bg="white", fg="blue")  # Changed fg color to blue
display_label.pack(fill="both", pady=15, padx=10)

# Basic button click function
def button_click(value):
    current_text = display_var.get()
    if value == "=":
        try:
            result = eval(current_text)
            display_var.set(str(result))
        except Exception:
            display_var.set("Error")
    elif value == "C":
        display_var.set("")
    else:
        display_var.set(current_text + value)

# Frame for buttons
button_frame = tk.Frame(root, bg="black")
button_frame.pack()

# Colors
button_bg = "#4A90E2"   # Blue color
button_fg = "white"
operator_bg = "#283593"  # Darker blue for operators

# Numbers and operations buttons
buttons = [
    ("7", 1, 0), ("8", 1, 1), ("9", 1, 2), ("/", 1, 3),
    ("4", 2, 0), ("5", 2, 1), ("6", 2, 2), ("*", 2, 3),
    ("1", 3, 0), ("2", 3, 1), ("3", 3, 2), ("-", 3, 3),
    ("C", 4, 0), ("0", 4, 1), ("=", 4, 2), ("+", 4, 3),
]

# Adding buttons to grid with professional styling
for (text, row, col) in buttons:
    btn_color = operator_bg if text in "+-*/=" else button_bg
    btn = tk.Button(button_frame, text=text, font=("Arial", 18), width=5, height=2,
                    bg=btn_color, fg=button_fg, command=lambda val=text: button_click(val))
    btn.grid(row=row, column=col, padx=5, pady=5)

root.mainloop()
