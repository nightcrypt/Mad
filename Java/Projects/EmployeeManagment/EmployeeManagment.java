package Projects.EmployeeManagment;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.ArrayList;

public class EmployeeManagment extends JFrame {
    private DefaultListModel<String> employeeListModel;
    private JList<String> employeeList;
    private JTextField nameField;
    private JTextField idField;
    private JTextField emailField;
    private JTextField positionField;
    private JButton addEmployeeButton;
    private JButton editEmployeeButton;
    private JButton removeEmployeeButton;
    private JButton searchButton;
    private JTextField searchField;
    private ArrayList<Employee> employees;

    public EmployeeManagment() {
        setTitle("Employee Management System ");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(600, 400);

        employees = new ArrayList<>();
        employeeListModel = new DefaultListModel<>();
        employeeList = new JList<>(employeeListModel);
        nameField = new JTextField(20);
        idField = new JTextField(20);
        emailField = new JTextField(20);
        positionField = new JTextField(20);
        addEmployeeButton = new JButton("Add Employee");
        editEmployeeButton = new JButton("Edit Employee");
        removeEmployeeButton = new JButton("Remove Employee");
        searchField = new JTextField(20);
        searchButton = new JButton("Search");

        addEmployeeButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                addEmployee();
            }
        });

        editEmployeeButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                editEmployee();
            }
        });

        removeEmployeeButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                removeEmployee();
            }
        });

        searchButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                searchEmployee();
            }
        });

        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(2, 1));

        JPanel buttonPanel = new JPanel();
        buttonPanel.add(new JLabel("Name:"));
        buttonPanel.add(nameField);
        buttonPanel.add(new JLabel("ID:"));
        buttonPanel.add(idField);
        buttonPanel.add(new JLabel("Email:"));
        buttonPanel.add(emailField);
        buttonPanel.add(new JLabel("Position:"));
        buttonPanel.add(positionField);
        buttonPanel.add(addEmployeeButton);
        buttonPanel.add(editEmployeeButton);
        buttonPanel.add(removeEmployeeButton);
        buttonPanel.add(new JLabel("Search:"));
        buttonPanel.add(searchField);
        buttonPanel.add(searchButton);

        panel.add(employeeList);
        panel.add(buttonPanel);

        add(panel);
    }

    private void addEmployee() {
        String name = nameField.getText();
        String id = idField.getText();
        String email = emailField.getText();
        String position = positionField.getText();
        
        Employee employee = new Employee(name, id, email, position);
        employees.add(employee);

        nameField.setText("");
        idField.setText("");
        emailField.setText("");
        positionField.setText("");

        updateEmployeeList();
    }

    private void editEmployee() {
        int selectedIndex = employeeList.getSelectedIndex();
        if (selectedIndex != -1) {
            Employee selectedEmployee = employees.get(selectedIndex);
            selectedEmployee.setName(nameField.getText());
            selectedEmployee.setId(idField.getText());
            selectedEmployee.setEmail(emailField.getText());
            selectedEmployee.setPosition(positionField.getText());

            nameField.setText("");
            idField.setText("");
            emailField.setText("");
            positionField.setText("");

            updateEmployeeList();
        }
    }

    private void removeEmployee() {
        int selectedIndex = employeeList.getSelectedIndex();
        if (selectedIndex != -1) {
            employees.remove(selectedIndex);
            updateEmployeeList();
        }
    }

    private void searchEmployee() {
        String searchName = searchField.getText();
        DefaultListModel<String> searchModel = new DefaultListModel<>();
        for (Employee employee : employees) {
            if (employee.getName().contains(searchName)) {
                searchModel.addElement(employee.getName());
            }
        }
        employeeList.setModel(searchModel);
    }

    private void updateEmployeeList() {
        employeeListModel.clear();
        for (Employee employee : employees) {
            employeeListModel.addElement(employee.getName());
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                new EmployeeManagment().setVisible(true);
            }
        });
    }
}

class Employee {
    private String name;
    private String id;
    private String email;
    private String position;

    public Employee(String name, String id, String email, String position) {
        this.name = name;
        this.id = id;
        this.email = email;
        this.position = position;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public String getPosition() {
        return position;
    }

    public void setPosition(String position) {
        this.position = position;
    }
}
