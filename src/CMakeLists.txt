find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(KF6 REQUIRED COMPONENTS WindowSystem)

target_link_libraries(your_app
    PRIVATE
        Qt6::Core
        KF6::WindowSystem
)