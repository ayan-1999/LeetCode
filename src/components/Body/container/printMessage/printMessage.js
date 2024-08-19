import "./printMessage.css";
const PrintMessage = ({bmi,message}) => {
  return (
    <div className="printMessage">
      <h4>Your BMI is :{bmi}</h4>
      <p>{message}</p>
    </div>
  );
};
export default PrintMessage;
