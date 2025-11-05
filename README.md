# Loading-Screen

**Loading Screen** is an asynchronous Unreal Engine plugin that displays a **custom widget** during level transitions or while new levels are loading.  
Unlike traditional loading screens, it **does not freeze** the game, as it runs **outside the main game thread**, ensuring a smooth and responsive experience.

---

## 💡 Overview

This plugin provides a highly flexible, non-blocking loading screen system for Unreal Engine.  
You can easily display **any custom widget** while levels are loading asynchronously — perfect for seamless transitions, branded screens, or animated progress visuals.

---

## ✨ Features

- ⚡ **Asynchronous Loading Screen** — runs off the game thread  
- 🎨 Supports **any custom UMG widget** as your loading screen  
- 🔁 Works during **level transitions**  
- 🧩 Easy to integrate with **Blueprints** or **C++**  
- 🕹️ No hitching or freezing during level loads  
- 💻 Compatible with **Windows**, **Linux**
---

## 🚀 How It Works

1. Design your custom UMG widget (progress bar, image, animation, etc.)  
2. Assign that widget as the **Loading Screen Widget** via Blueprint.  
3. When you trigger a level load or transition, the loading screen automatically appears and hides once the new level is fully loaded.

Because it’s asynchronous, the engine remains responsive during loading — perfect for games that require fluid transitions.

---

## 🧱 Use Cases

- Custom loading UIs between levels  
- Smooth cinematic or seamless transitions  
- Branded splash or company intro screens  
- Progress indicators for async level streaming    

---

## 🛠️ Installation

1. Copy or clone the plugin into your Unreal project
2. Open Unreal Engine Project → **Edit → Plugins**
3. Enable **Loading Screen** and restart the editor.

---

## ⚙️ Customization

- 🧩 Use **any UMG widget** as the loading screen  
- ⚡ Fully asynchronous — no game thread blocking  
- 🔄 Easily extendable for custom transitions or animations  

---

## 📦 Compatibility

- Unreal Engine 5  
- Blueprint & C++ compatible  
- Windows, Linux  

---

## 🧑‍💻 Author

**Nitin Nishad**  
Unreal Engine Developer | C++ | Blueprints | Multiplayer | VR  

---

## 🪪 License

This plugin is released under the **MIT License**.  
You can use it freely in both personal and commercial projects.

---

⭐ If you find this plugin useful, don’t forget to **star the repository**!
