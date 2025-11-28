@ExtendWith(MockitoExtension.class)
public class UserServiceTest {

    @InjectMocks
    private UserService userService;

    @Mock
    UserRepository userRepository;

    UserResponseDTO dto;

    @Test
    void deveriaListarUsuarios() {
        //Arrange
        //Act
        userService.getAll();

        //Assert
        then(userRepository).should().findAll();
    }
}
