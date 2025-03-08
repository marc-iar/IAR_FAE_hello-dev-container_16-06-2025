# hello-dev-container
A simple demonstration of a Dev Container with the IAR Build Tools in GitHub Codespaces.

# How-to
1. Fork this repository.
2. Set your `IAR_LMS_BEARER_TOKEN` at your repository settings, under "Settings", "Secrets and variables", "Codespaces".

![Screenshot_20250307_172404](https://github.com/user-attachments/assets/4dc9ca27-4ab0-4ce9-a19b-7c2d0f44f341)

3. Go back to your repository and choose "<> Code", "Codespaces", "Create codespace...".

![Screenshot_20250307_172458](https://github.com/user-attachments/assets/6adde88e-1bea-42a0-814c-e02fad1a378c)

4. Test your compiler in VS Code's terminal.

![Screenshot_20250307_172635](https://github.com/user-attachments/assets/3997424c-143e-445e-86ba-4cf9fc9d08a8)

5. From the Extensions panel, reach out to the CMake extension and select your [configuration preset](https://cmake.org/cmake/help/v3.31/manual/cmake-presets.7.html).

![Screenshot_20250307_172914](https://github.com/user-attachments/assets/218c67be-d227-483d-9db8-29da7df2868d)

![Screenshot_20250307_172649](https://github.com/user-attachments/assets/b526baf0-59f7-46c3-96f5-cbff5b9a4d3f)

6. You should now get your CMake project configured.

![Screenshot_20250307_172950](https://github.com/user-attachments/assets/1668c605-d2e0-45b7-b378-1fa74f913a67)

7. Build it with the IAR Build Tools!

![Screenshot_20250307_173052](https://github.com/user-attachments/assets/14c7c209-08f7-42a6-a7c0-50be98f05d98)

8. Debug it with IAR C-SPY!

![Screenshot_20250307_173109](https://github.com/user-attachments/assets/2fbfbb0f-1da7-403b-8d45-25c32c80cad8)

![image](https://github.com/user-attachments/assets/0037eeea-160b-4b57-9fc9-c137764296b6)

It was a glorious journey! For a more comprehensive live example, try [modern-workflow](https://github.com/fae-emea/modern-workflow).
