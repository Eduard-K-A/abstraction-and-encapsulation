🚀 Project QOL Frontend
The frontend application for Project QOL (Quality of Life), a software development initiative aimed at enhancing the developer experience and overall quality of life for our team.

This project is a modern web application built with Next.js and bootstrapped using create-next-app.

✨ Features
Modern Stack: Built with Next.js, React, and TypeScript for a robust and scalable application.

Optimized Performance: Leverages Next.js features like automatic code splitting and Vercel's optimized font loading (Geist).

Intuitive Routing: Uses the modern Next.js App Router for clear and organized routing logic.

Reusable Components: Standardized UI components for rapid development and consistency.

🏗️ Project Structure
The repository is organized to maintain clarity and separation of concerns.

Core Directories
Directory	Purpose
app/	Contains the routing logic for the application (the App Router). This is where you define your pages, layouts, and their respective routes.
components/	Houses reusable UI components (e.g., buttons, cards, navigation) that are used throughout the application.
hooks/	Stores custom React Hooks for encapsulating stateful logic and making it reusable across different components.
libs/	Intended for utility functions, helper libraries, constant data, and non-React specific logic.
public/	For static assets like images, fonts, and other files that need to be served directly.
styles/	Contains global styles, CSS variables, and theme definitions.

Export to Sheets
🛠️ Getting Started
Follow these steps to set up the project locally.

Prerequisites
Node.js (LTS recommended)

npm, yarn, pnpm, or bun (a package manager)

Installation
Clone the Repository:

Bash

git clone [YOUR_REPO_URL_HERE]
cd project-qol-frontend
Install Dependencies:
Choose your preferred package manager and run the corresponding command:

Bash

# Using npm
npm install

# Using yarn
# yarn install

# Using pnpm
# pnpm install
Running the Development Server
Start the development server with hot-reloading:

Bash

# Using npm
npm run dev

# Using yarn
# yarn dev

# Using pnpm
# pnpm dev
The application will now be running on http://localhost:3000.

Tip: Start editing the main page by modifying the file at app/page.tsx. The browser will automatically update as you make changes.

📚 Learn More
For deeper understanding and advanced features, refer to the official Next.js documentation:

Next.js Documentation - Learn about Next.js features and API.

Learn Next.js - An interactive, hands-on tutorial for Next.js.

Vercel GitHub Repository - View the source code and contribute to the Next.js framework.

🚢 Deployment
The easiest and recommended way to deploy this Next.js application is by using the Vercel Platform, the creators of Next.js.

Vercel Deployment
Push your code to your GitHub repository.

Sign up or log in to Vercel.

Import your project from your Git provider. Vercel will automatically detect that it's a Next.js application and set up the build configuration.

For a full guide, check the Next.js Deployment Documentation.
